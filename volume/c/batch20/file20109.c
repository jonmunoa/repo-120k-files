// fichero 20109 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20109;

Registro20109 crear_registro20109(int id) {
    Registro20109 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
