// fichero 48181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48181;

Registro48181 crear_registro48181(int id) {
    Registro48181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
