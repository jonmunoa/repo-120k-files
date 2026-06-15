// fichero 49333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49333;

Registro49333 crear_registro49333(int id) {
    Registro49333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
