// fichero 35593 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35593;

Registro35593 crear_registro35593(int id) {
    Registro35593 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
