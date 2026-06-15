// fichero 36333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36333;

Registro36333 crear_registro36333(int id) {
    Registro36333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
