// fichero 35865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35865;

Registro35865 crear_registro35865(int id) {
    Registro35865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
