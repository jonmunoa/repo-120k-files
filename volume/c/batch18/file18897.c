// fichero 18897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18897;

Registro18897 crear_registro18897(int id) {
    Registro18897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
