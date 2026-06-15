// fichero 849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro849;

Registro849 crear_registro849(int id) {
    Registro849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
