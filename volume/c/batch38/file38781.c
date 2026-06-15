// fichero 38781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38781;

Registro38781 crear_registro38781(int id) {
    Registro38781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
