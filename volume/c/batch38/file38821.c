// fichero 38821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38821;

Registro38821 crear_registro38821(int id) {
    Registro38821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
