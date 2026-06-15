// fichero 26333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26333;

Registro26333 crear_registro26333(int id) {
    Registro26333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
