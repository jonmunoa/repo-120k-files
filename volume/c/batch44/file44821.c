// fichero 44821 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44821;

Registro44821 crear_registro44821(int id) {
    Registro44821 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
