// fichero 47033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47033;

Registro47033 crear_registro47033(int id) {
    Registro47033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
