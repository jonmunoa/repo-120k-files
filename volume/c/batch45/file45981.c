// fichero 45981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45981;

Registro45981 crear_registro45981(int id) {
    Registro45981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
