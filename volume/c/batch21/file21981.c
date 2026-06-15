// fichero 21981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21981;

Registro21981 crear_registro21981(int id) {
    Registro21981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
