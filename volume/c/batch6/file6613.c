// fichero 6613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6613;

Registro6613 crear_registro6613(int id) {
    Registro6613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
