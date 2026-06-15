// fichero 1849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1849;

Registro1849 crear_registro1849(int id) {
    Registro1849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
