// fichero 49821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49821;

Registro49821 crear_registro49821(int id) {
    Registro49821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
