// fichero 39981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39981;

Registro39981 crear_registro39981(int id) {
    Registro39981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
