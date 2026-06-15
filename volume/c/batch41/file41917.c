// fichero 41917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41917;

Registro41917 crear_registro41917(int id) {
    Registro41917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
