// fichero 49149 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49149;

Registro49149 crear_registro49149(int id) {
    Registro49149 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
