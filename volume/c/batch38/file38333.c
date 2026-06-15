// fichero 38333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38333;

Registro38333 crear_registro38333(int id) {
    Registro38333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
