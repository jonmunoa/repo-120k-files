// fichero 12149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12149;

Registro12149 crear_registro12149(int id) {
    Registro12149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
