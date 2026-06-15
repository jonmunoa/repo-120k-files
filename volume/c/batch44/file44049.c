// fichero 44049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44049;

Registro44049 crear_registro44049(int id) {
    Registro44049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
