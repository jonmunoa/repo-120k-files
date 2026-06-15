// fichero 5777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5777;

Registro5777 crear_registro5777(int id) {
    Registro5777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
