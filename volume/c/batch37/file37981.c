// fichero 37981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37981;

Registro37981 crear_registro37981(int id) {
    Registro37981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
