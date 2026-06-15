// fichero 35333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35333;

Registro35333 crear_registro35333(int id) {
    Registro35333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
