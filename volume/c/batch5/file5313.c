// fichero 5313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5313;

Registro5313 crear_registro5313(int id) {
    Registro5313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
