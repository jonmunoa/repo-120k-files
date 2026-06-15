// fichero 35929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35929;

Registro35929 crear_registro35929(int id) {
    Registro35929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
