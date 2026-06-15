// fichero 22981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22981;

Registro22981 crear_registro22981(int id) {
    Registro22981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
