// fichero 6353 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6353;

Registro6353 crear_registro6353(int id) {
    Registro6353 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
