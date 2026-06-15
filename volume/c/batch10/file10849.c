// fichero 10849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10849;

Registro10849 crear_registro10849(int id) {
    Registro10849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
