// fichero 9529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9529;

Registro9529 crear_registro9529(int id) {
    Registro9529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
