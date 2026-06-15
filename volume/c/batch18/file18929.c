// fichero 18929 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18929;

Registro18929 crear_registro18929(int id) {
    Registro18929 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
