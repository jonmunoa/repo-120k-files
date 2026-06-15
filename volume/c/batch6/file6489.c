// fichero 6489 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6489;

Registro6489 crear_registro6489(int id) {
    Registro6489 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
