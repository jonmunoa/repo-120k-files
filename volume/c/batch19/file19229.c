// fichero 19229 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19229;

Registro19229 crear_registro19229(int id) {
    Registro19229 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
