// fichero 6181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6181;

Registro6181 crear_registro6181(int id) {
    Registro6181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
