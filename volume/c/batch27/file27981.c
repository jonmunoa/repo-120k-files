// fichero 27981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27981;

Registro27981 crear_registro27981(int id) {
    Registro27981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
