// fichero 4901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4901;

Registro4901 crear_registro4901(int id) {
    Registro4901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
