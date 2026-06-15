// fichero 6185 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6185;

Registro6185 crear_registro6185(int id) {
    Registro6185 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
