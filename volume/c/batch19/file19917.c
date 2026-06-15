// fichero 19917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19917;

Registro19917 crear_registro19917(int id) {
    Registro19917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
