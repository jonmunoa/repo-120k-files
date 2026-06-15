// fichero 44161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44161;

Registro44161 crear_registro44161(int id) {
    Registro44161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
