// fichero 36677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36677;

Registro36677 crear_registro36677(int id) {
    Registro36677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
