// fichero 3557 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3557;

Registro3557 crear_registro3557(int id) {
    Registro3557 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
