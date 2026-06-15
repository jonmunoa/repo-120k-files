// fichero 49565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49565;

Registro49565 crear_registro49565(int id) {
    Registro49565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
