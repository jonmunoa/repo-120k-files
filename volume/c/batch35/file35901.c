// fichero 35901 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35901;

Registro35901 crear_registro35901(int id) {
    Registro35901 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
