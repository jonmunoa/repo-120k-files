// fichero 9849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9849;

Registro9849 crear_registro9849(int id) {
    Registro9849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
