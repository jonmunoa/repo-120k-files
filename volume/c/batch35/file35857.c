// fichero 35857 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35857;

Registro35857 crear_registro35857(int id) {
    Registro35857 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
