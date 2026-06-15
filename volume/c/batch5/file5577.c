// fichero 5577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5577;

Registro5577 crear_registro5577(int id) {
    Registro5577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
