// fichero 22785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22785;

Registro22785 crear_registro22785(int id) {
    Registro22785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
