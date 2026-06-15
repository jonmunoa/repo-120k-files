// fichero 27333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27333;

Registro27333 crear_registro27333(int id) {
    Registro27333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
