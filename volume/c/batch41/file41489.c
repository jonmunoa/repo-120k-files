// fichero 41489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41489;

Registro41489 crear_registro41489(int id) {
    Registro41489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
