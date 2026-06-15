// fichero 9753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9753;

Registro9753 crear_registro9753(int id) {
    Registro9753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
