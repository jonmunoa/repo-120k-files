// fichero 44777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44777;

Registro44777 crear_registro44777(int id) {
    Registro44777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
