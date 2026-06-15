// fichero 49721 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49721;

Registro49721 crear_registro49721(int id) {
    Registro49721 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
