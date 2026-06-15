// fichero 16781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16781;

Registro16781 crear_registro16781(int id) {
    Registro16781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
