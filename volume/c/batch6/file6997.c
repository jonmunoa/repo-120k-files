// fichero 6997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6997;

Registro6997 crear_registro6997(int id) {
    Registro6997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
